# DslpUnrealProof

The DSL platform's Unreal customer-journey fixture: the engine's own `TP_Blank` C++ template as the editor's new-project wizard instantiates it (Unreal 5.7), plus `UDslpUnrealProofGameInstance`, which logs `dslp unrealproof ok`, writes it to `dslp_unrealproof.txt` where the program was run, and exits — the proof a headless run of the packaged program leaves behind. Authored by `tools/e2e/unreal_fixture.py author`.
