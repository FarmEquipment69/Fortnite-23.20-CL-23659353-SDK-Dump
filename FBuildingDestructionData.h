// ScriptStruct /Script/FortniteGame.BuildingDestructionData
// Size: 0x80
struct FBuildingDestructionData
{
	struct TWeakObjectPtr<class AFortPawn> PawnInstigator; // 0x6c (0x8)
	struct TWeakObjectPtr<class AActor> DamageCauser; // 0x74 (0x8)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

