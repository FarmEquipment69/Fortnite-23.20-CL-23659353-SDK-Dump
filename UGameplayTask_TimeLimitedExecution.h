// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x90
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
	struct FMulticastInlineDelegate OnFinished; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x70 (0x10)
	unsigned char padding_80[0x10]; // 0x80 (0x10)
};

