// ScriptStruct /Script/Engine.ChildActorComponentInstanceData
// Size: 0xf8
struct FChildActorComponentInstanceData : FSceneComponentInstanceData
{
	class UClass* ChildActorClass; // 0xb8 (0x8)
	struct FName ChildActorName; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; // 0xc8 (0x10)
	unsigned char padding_d8[0x20]; // 0xd8 (0x20)
};

