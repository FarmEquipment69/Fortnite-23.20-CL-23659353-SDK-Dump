// ScriptStruct /Script/FortniteGame.FortTouchAimAssist
// Size: 0x410
struct FFortTouchAimAssist
{
	struct FFortAimAssist2D_InputParams InputParams; // 0x0 (0x70)
	struct FFortAimAssist2D_OwnerInfo OwnerInfo; // 0x70 (0x270)
	struct TArray<struct FFortAimAssist2D_Target> TargetCache0; // 0x2e0 (0x10)
	struct TArray<struct FFortAimAssist2D_Target> TargetCache1; // 0x2f0 (0x10)
	unsigned char unreflected_300[0x8]; // 0x300 (0x8) 
	class AActor* AutoFireTargetActor; // 0x308 (0x8)
	unsigned char padding_310[0x100]; // 0x310 (0x100)
};

