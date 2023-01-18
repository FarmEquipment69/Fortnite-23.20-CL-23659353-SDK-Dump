// ScriptStruct /Script/Engine.ActorDesc
// Size: 0x78
struct FActorDesc
{
	struct FGuid Guid; // 0x0 (0x10)
	struct FSoftObjectPath Class; // 0x10 (0x18)
	struct FName Name; // 0x28 (0x4)
	struct FName Label; // 0x2c (0x4)
	struct FBox Bounds; // 0x30 (0x38)
	struct FName RuntimeGrid; // 0x68 (0x4)
	bool bIsSpatiallyLoaded; // 0x6c (0x1)
	bool bActorIsEditorOnly; // 0x6d (0x1)
	unsigned char unreflected_6e[0x2]; // 0x6e (0x2) 
	struct FName ActorPackage; // 0x70 (0x4)
	struct FName ActorPath; // 0x74 (0x4)
};

