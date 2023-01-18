// ScriptStruct /Script/CustomizableObject.MutableRefSocket
// Size: 0x58
struct FMutableRefSocket
{
	struct FName SocketName; // 0x0 (0x4)
	struct FName BoneName; // 0x4 (0x4)
	struct FVector RelativeLocation; // 0x8 (0x18)
	struct FRotator RelativeRotation; // 0x20 (0x18)
	struct FVector RelativeScale; // 0x38 (0x18)
	bool bForceAlwaysAnimated; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	int Priority; // 0x54 (0x4)
};

