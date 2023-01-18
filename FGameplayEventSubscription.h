// ScriptStruct /Script/DataDrivenGameplayEventRouter.GameplayEventSubscription
// Size: 0x78
struct FGameplayEventSubscription
{
	struct TWeakObjectPtr<class UObject> Object; // 0x0 (0x28)
	struct FMemberReference EventDescriptor; // 0x28 (0x30)
	struct FGameplayEventListenerHandle EventHandle; // 0x58 (0x1c)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

