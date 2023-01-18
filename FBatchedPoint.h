// ScriptStruct /Script/Engine.BatchedPoint
// Size: 0x38
struct FBatchedPoint
{
	struct FVector Position; // 0x0 (0x18)
	struct FLinearColor Color; // 0x18 (0x10)
	float PointSize; // 0x28 (0x4)
	float RemainingLifeTime; // 0x2c (0x4)
	unsigned char DepthPriority; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

