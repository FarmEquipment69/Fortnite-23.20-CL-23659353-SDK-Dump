// ScriptStruct /Script/Engine.InstanceCacheDataBase
// Size: 0x58
struct FInstanceCacheDataBase
{
	struct TArray<unsigned char> SavedProperties; // 0x8 (0x10)
	struct FDataCacheDuplicatedObjectData UniqueTransientPackage; // 0x18 (0x10)
	struct TArray<struct FDataCacheDuplicatedObjectData> DuplicatedObjects; // 0x28 (0x10)
	struct TArray<class UObject*> ReferencedObjects; // 0x38 (0x10)
	struct TArray<struct FName> ReferencedNames; // 0x48 (0x10)
};

