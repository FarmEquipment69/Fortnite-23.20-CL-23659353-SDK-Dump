// Class /Script/CommonConversationRuntime.ConversationNode
// Size: 0x58
class UConversationNode : public UObject
{
	class UObject* EvalWorldContextObj; // 0x28 (0x8)
	struct FString NodeName; // 0x30 (0x10)
	struct FGuid CompiledNodeGUID; // 0x40 (0x10)
	class UConversationNode* ParentNode; // 0x50 (0x8)

	/* Functions */

	// Function /Script/CommonConversationRuntime.ConversationNode.GetDebugParticipantColor (Underlying native function: GetDebugParticipantColor 0x70e0dd8)
	struct FLinearColor GetDebugParticipantColor(struct FGameplayTag& ParticipantID); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

