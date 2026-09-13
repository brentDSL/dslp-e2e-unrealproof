// The journey's proof (P-22): the packaged program logs its marker, writes it
// where it was run, and exits — so a headless run leaves evidence and ends.
#include "DslpUnrealProofGameInstance.h"

#include "Engine/Engine.h"
#include "HAL/PlatformMisc.h"
#include "HAL/PlatformProcess.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

static const TCHAR* DslpProofMarker = TEXT("dslp unrealproof ok");

void UDslpUnrealProofGameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Display, TEXT("%s"), DslpProofMarker);
}

void UDslpUnrealProofGameInstance::OnStart()
{
	Super::OnStart();
	// The marker lands in the process's working directory: where the customer ran it.
	const FString MarkerPath = FPaths::Combine(
		FPlatformProcess::GetCurrentWorkingDirectory(), TEXT("dslp_unrealproof.txt"));
	FFileHelper::SaveStringToFile(FString(DslpProofMarker) + LINE_TERMINATOR, *MarkerPath);
	UE_LOG(LogTemp, Display, TEXT("%s (wrote %s)"), DslpProofMarker, *MarkerPath);
	if (!GIsEditor)
	{
		FPlatformMisc::RequestExit(false);
	}
}
// webhook-build push
// webhook-build push
// webhook-build push
// webhook-build push
