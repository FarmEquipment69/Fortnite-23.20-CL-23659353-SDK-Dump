// ScriptStruct /Script/Engine.ActorInstanceHandle
// Size: 0x18
struct FActorInstanceHandle
{
	struct TWeakObjectPtr<class AActor> Actor; // 0x0 (0x8)
	unsigned char padding_8[0x10]; // 0x8 (0x10)
};

