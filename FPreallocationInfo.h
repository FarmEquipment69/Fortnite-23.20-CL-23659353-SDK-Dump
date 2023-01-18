// ScriptStruct /Script/GameplayAbilities.PreallocationInfo
// Size: 0x68
struct FPreallocationInfo
{
	unsigned char PreallocatedInstances_0[0x50]; // 0x0 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)
	struct TArray<class UClass*> ClassesNeedingPreallocation; // 0x50 (0x10)
	unsigned char padding_60[0x8]; // 0x60 (0x8)
};

