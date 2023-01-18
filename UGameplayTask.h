// Class /Script/GameplayTasks.GameplayTask
// Size: 0x60
class UGameplayTask : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FName InstanceName; // 0x30 (0x4)
	unsigned char unreflected_34[0x2]; // 0x34 (0x2) 
	enum ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x36 (0x1)
	unsigned char unreflected_37[0x21]; // 0x37 (0x21) 
	class UGameplayTask* ChildTask; // 0x58 (0x8)

	/* Functions */

	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation (Underlying native function: ReadyForActivation 0xa03f70c)
	void ReadyForActivation(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature (Has no native function)
	void GenericGameplayTaskDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/GameplayTasks.GameplayTask.EndTask (Underlying native function: EndTask 0xa03f288)
	void EndTask(); // (Final | Native | Public | BlueprintCallable)
};

