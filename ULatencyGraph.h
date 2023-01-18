// Class /Script/LatencyUI.LatencyGraph
// Size: 0x2b0
class ULatencyGraph : public UUserWidget
{
	struct FColor TotalLatencyLineColor; // 0x268 (0x4)
	struct FColor GameLatencyLineColor; // 0x26c (0x4)
	struct FColor RenderLatencyLineColor; // 0x270 (0x4)
	struct FColor DriverLatencyLineColor; // 0x274 (0x4)
	struct FColor OSWorkQueueLatencyLineColor; // 0x278 (0x4)
	struct FColor GPURenderLatencyLineColor; // 0x27c (0x4)
	struct FColor BackgroundColor; // 0x280 (0x4)
	float MaxLatencyToGraph; // 0x284 (0x4)
	struct FVector2D DesiredSize; // 0x288 (0x10)
	unsigned char padding_298[0x18]; // 0x298 (0x18)
};

