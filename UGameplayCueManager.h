// Class /Script/GameplayAbilities.GameplayCueManager
// Size: 0x310
class UGameplayCueManager : public UDataAsset
{
	unsigned char unreflected_30[0x18]; // 0x30 (0x18) 
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x48 (0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0x98 (0x50)
	unsigned char unreflected_e8[0x1c8]; // 0xe8 (0x1c8) 
	struct TArray<> LoadedGameplayCueNotifyClasses; // 0x2b0 (0x10)
	struct TArray<class UClass*> GameplayCueClassesForPreallocation; // 0x2c0 (0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x2d0 (0x10)
	int GameplayCueSendContextCount; // 0x2e0 (0x4)
	unsigned char unreflected_2e4[0x4]; // 0x2e4 (0x4) 
	struct TArray<struct FPreallocationInfo> PreallocationInfoListInternal; // 0x2e8 (0x10)
	unsigned char padding_2f8[0x18]; // 0x2f8 (0x18)
};

