// Class /Script/FortniteGame.FortVisibilityComponent
// Size: 0xc0
class UFortVisibilityComponent : public UActorComponent
{
	unsigned char bRegisterWithVisibilityManager; // 0xa0 (0x1)
	unsigned char bObserver; // 0xa0 (0x1)
	unsigned char bDistanceCheck2D; // 0xa0 (0x1)
	unsigned char bCheckFacing; // 0xa0 (0x1)
	unsigned char bCheckLOS; // 0xa0 (0x1)
	unsigned char bRevealWithMap; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	enum EFortVisibilityBehavior VisibilityBehavior; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	struct FMulticastInlineDelegate OnVisibilityChangedEvent; // 0xa8 (0x10)
	float Radius; // 0xb8 (0x4)
	unsigned char padding_bc[0x4]; // 0xbc (0x4)
};

