// ScriptStruct /Script/FortniteGame.ActorAndTransformPair
// Size: 0x80
struct FActorAndTransformPair
{
	class AActor* Actor; // 0x0 (0x8)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Transform; // 0x10 (0x60)
	bool bHasValidTransform; // 0x70 (0x1)
	unsigned char padding_71[0xf]; // 0x71 (0xf)
};

