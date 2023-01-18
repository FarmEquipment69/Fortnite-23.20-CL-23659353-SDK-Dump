// ScriptStruct /Script/GameplayStateMachine.GameplayStateMachineItem
// Size: 0x20
struct FGameplayStateMachineItem : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UGameplayStateMachine* StateMachine; // 0x10 (0x8)
	float BeginStateDelay; // 0x18 (0x4)
	float InitializationTime; // 0x1c (0x4)
};

