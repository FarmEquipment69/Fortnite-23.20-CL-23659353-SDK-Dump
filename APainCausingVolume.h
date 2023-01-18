// Class /Script/Engine.PainCausingVolume
// Size: 0x2f8
class APainCausingVolume : public APhysicsVolume
{
	unsigned char bPainCausing; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x3]; // 0x2d1 (0x3) 
	float DamagePerSec; // 0x2d4 (0x4)
	class UClass* DamageType; // 0x2d8 (0x8)
	float PainInterval; // 0x2e0 (0x4)
	unsigned char bEntryPain; // 0x2e4 (0x1)
	unsigned char BACKUPbPainCausing; // 0x2e4 (0x1)
	unsigned char unreflected_2e5[0x3]; // 0x2e5 (0x3) 
	class AController* DamageInstigator; // 0x2e8 (0x8)
	unsigned char padding_2f0[0x8]; // 0x2f0 (0x8)
};

