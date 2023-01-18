// ScriptStruct /Script/ControlRig.CRSimPointContainer
// Size: 0x78
struct FCRSimPointContainer : FCRSimContainer
{
	struct TArray<struct FCRSimPoint> Points; // 0x18 (0x10)
	struct TArray<struct FCRSimLinearSpring> Springs; // 0x28 (0x10)
	struct TArray<struct FCRSimPointForce> Forces; // 0x38 (0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes; // 0x48 (0x10)
	struct TArray<struct FCRSimPointConstraint> Constraints; // 0x58 (0x10)
	struct TArray<struct FCRSimPoint> PreviousStep; // 0x68 (0x10)
};

