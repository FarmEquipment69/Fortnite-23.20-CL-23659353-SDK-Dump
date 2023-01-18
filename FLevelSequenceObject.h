// ScriptStruct /Script/LevelSequence.LevelSequenceObject
// Size: 0x38
struct FLevelSequenceObject
{
	struct TLazyObjectPtr<class UObject> ObjectOrOwner; // 0x0 (0x1c)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FString ComponentName; // 0x20 (0x10)
	struct TWeakObjectPtr<class UObject> CachedComponent; // 0x30 (0x8)
};

