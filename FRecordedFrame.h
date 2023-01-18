// ScriptStruct /Script/Chaos.RecordedFrame
// Size: 0xb8
struct FRecordedFrame
{
	struct TArray<struct FTransform> Transforms; // 0x0 (0x10)
	struct TArray<int> TransformIndices; // 0x10 (0x10)
	struct TArray<int> PreviousTransformIndices; // 0x20 (0x10)
	struct TArray<bool> DisabledFlags; // 0x30 (0x10)
	struct TArray<struct FSolverCollisionData> CollisionS; // 0x40 (0x10)
	struct TArray<struct FSolverBreakingData> Breakings; // 0x50 (0x10)
	struct TSet<struct FSolverTrailingData> Trailings; // 0x60 (0x50)
	float Timestamp; // 0xb0 (0x4)
	unsigned char padding_b4[0x4]; // 0xb4 (0x4)
};

