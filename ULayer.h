// Class /Script/Engine.Layer
// Size: 0x40
class ULayer : public UObject
{
	struct FName LayerName; // 0x28 (0x4)
	unsigned char bIsVisible; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	struct TArray<struct FLayerActorStats> ActorStats; // 0x30 (0x10)
};

