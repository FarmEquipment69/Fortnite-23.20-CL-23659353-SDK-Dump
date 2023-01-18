// Class /Script/Engine.LocalPlayer
// Size: 0x298
class ULocalPlayer : public UPlayer
{
	unsigned char unreflected_48[0x30]; // 0x48 (0x30) 
	class UGameViewportClient* ViewportClient; // 0x78 (0x8)
	unsigned char unreflected_80[0x38]; // 0x80 (0x38) 
	struct TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x7]; // 0xb9 (0x7) 
	class UClass* PendingLevelPlayerControllerClass; // 0xc0 (0x8)
	unsigned char bSentSplitJoin; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x17]; // 0xc9 (0x17) 
	int ControllerId; // 0xe0 (0x4)
	unsigned char padding_e4[0x1b4]; // 0xe4 (0x1b4)
};

