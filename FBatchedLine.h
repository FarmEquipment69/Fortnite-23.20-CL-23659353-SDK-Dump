// ScriptStruct /Script/Engine.BatchedLine
// Size: 0x50
struct FBatchedLine
{
	struct FVector Start; // 0x0 (0x18)
	struct FVector End; // 0x18 (0x18)
	struct FLinearColor Color; // 0x30 (0x10)
	float Thickness; // 0x40 (0x4)
	float RemainingLifeTime; // 0x44 (0x4)
	unsigned char DepthPriority; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

