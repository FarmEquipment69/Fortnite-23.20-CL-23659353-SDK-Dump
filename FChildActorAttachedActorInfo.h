// ScriptStruct /Script/Engine.ChildActorAttachedActorInfo
// Size: 0x70
struct FChildActorAttachedActorInfo
{
	struct TWeakObjectPtr<class AActor> Actor; // 0x0 (0x8)
	struct FName SocketName; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FTransform RelativeTransform; // 0x10 (0x60)
};

