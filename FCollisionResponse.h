// ScriptStruct /Script/Engine.CollisionResponse
// Size: 0x30
struct FCollisionResponse
{
	struct FCollisionResponseContainer ResponseToChannels; // 0x0 (0x20)
	struct TArray<struct FResponseChannel*> ResponseArray; // 0x20 (0x10)
};

