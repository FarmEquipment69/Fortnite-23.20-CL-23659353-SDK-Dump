// ScriptStruct /Script/FortniteGame.RecoilPart
// Size: 0x130
struct FRecoilPart
{
	struct FVector Translation; // 0x0 (0x18)
	struct FRotator Rotation; // 0x18 (0x18)
	enum ERecoilType RecoilType; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float SpringStiffness; // 0x34 (0x4)
	float SpringDamping; // 0x38 (0x4)
	float KickVelocity; // 0x3c (0x4)
	unsigned char padding_40[0xf0]; // 0x40 (0xf0)
};

