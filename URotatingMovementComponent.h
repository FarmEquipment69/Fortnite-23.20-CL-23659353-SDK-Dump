// Class /Script/Engine.RotatingMovementComponent
// Size: 0x140
class URotatingMovementComponent : public UMovementComponent
{
	struct FRotator RotationRate; // 0x108 (0x18)
	struct FVector PivotTranslation; // 0x120 (0x18)
	unsigned char bRotationInLocalSpace; // 0x138 (0x1)
	unsigned char padding_139[0x7]; // 0x139 (0x7)
};

