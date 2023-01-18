// ScriptStruct /Script/FortniteGame.PossessPropClasses
// Size: 0x80
struct FPossessPropClasses : FTableRowBase
{
	struct TWeakObjectPtr<class UClass> ClassPath; // 0x8 (0x28)
	float PreviewScale; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FRotator PossessedRotation; // 0x38 (0x18)
	struct FVector PossessedScale; // 0x50 (0x18)
	struct FText CategoryLabelText; // 0x68 (0x18)
};

