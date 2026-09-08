// The journey's proof (P-22): the packaged program says what it is.
#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DslpUnrealProofGameInstance.generated.h"

UCLASS()
class DSLPUNREALPROOF_API UDslpUnrealProofGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void OnStart() override;
};
