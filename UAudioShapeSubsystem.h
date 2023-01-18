// Class /Script/AudioShapes.AudioShapeSubsystem
// Size: 0x88
class UAudioShapeSubsystem : public UWorldSubsystem
{
	unsigned char unreflected_30[0x28]; // 0x30 (0x28) 
	struct TArray<class UAudioShapeComponent*> AudioShapes; // 0x58 (0x10)
	struct TArray<class APlayerController*> LocalControllers; // 0x68 (0x10)
	unsigned char padding_78[0x10]; // 0x78 (0x10)
};

