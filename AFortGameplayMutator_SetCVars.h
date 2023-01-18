// Class /Script/FortniteGame.FortGameplayMutator_SetCVars
// Size: 0x300
class AFortGameplayMutator_SetCVars : public AFortGameplayMutator
{
	struct TArray<struct FSetCVarParams> CVarsToSet; // 0x2c0 (0x10)
	struct TArray<struct FSetCVarParams> CVarsToSetClientOnly; // 0x2d0 (0x10)
	struct TArray<struct FSetCVarParams> CVarsToSetServerOnly; // 0x2e0 (0x10)
	struct TArray<struct FSetCVarParams> CVarsToSetBack; // 0x2f0 (0x10)
};

