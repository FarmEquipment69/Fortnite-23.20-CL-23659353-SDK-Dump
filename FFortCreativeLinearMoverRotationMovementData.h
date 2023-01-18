// ScriptStruct /Script/FortniteGame.FortCreativeLinearMoverRotationMovementData
// Size: 0x40
struct FFortCreativeLinearMoverRotationMovementData
{
	struct FRotator TargetRotation; // 0x0 (0x18)
	struct FRotator InitialRotation; // 0x18 (0x18)
	float StartTime; // 0x30 (0x4)
	float EndTime; // 0x34 (0x4)
	enum EFortCreativeLinearMoverRotationDirection RotationDirection; // 0x38 (0x1)
	bool bFinished; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

