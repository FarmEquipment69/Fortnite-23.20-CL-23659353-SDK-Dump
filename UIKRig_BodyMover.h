// Class /Script/IKRig.IKRig_BodyMover
// Size: 0x78
class UIKRig_BodyMover : public UIKRigSolver
{
	struct FName RootBone; // 0x30 (0x4)
	float PositionAlpha; // 0x34 (0x4)
	float PositionPositiveX; // 0x38 (0x4)
	float PositionNegativeX; // 0x3c (0x4)
	float PositionPositiveY; // 0x40 (0x4)
	float PositionNegativeY; // 0x44 (0x4)
	float PositionPositiveZ; // 0x48 (0x4)
	float PositionNegativeZ; // 0x4c (0x4)
	float RotationAlpha; // 0x50 (0x4)
	float RotateXAlpha; // 0x54 (0x4)
	float RotateYAlpha; // 0x58 (0x4)
	float RotateZAlpha; // 0x5c (0x4)
	struct TArray<class UIKRig_BodyMoverEffector*> Effectors; // 0x60 (0x10)
	unsigned char padding_70[0x8]; // 0x70 (0x8)
};

