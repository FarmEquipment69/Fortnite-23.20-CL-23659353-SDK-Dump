// Class /Script/FortniteGame.FortPawnComponent_SpeechBubble
// Size: 0x1d8
class UFortPawnComponent_SpeechBubble : public UFortPawnComponent
{
	struct FMulticastInlineDelegate SpeechBubbleShow; // 0xa0 (0x10)
	struct FMulticastInlineDelegate SpeechBubbleHide; // 0xb0 (0x10)
	struct TWeakObjectPtr<class UDataTable> SpeechBubbleTexts; // 0xc0 (0x28)
	class UClass* SpeechBubbleWidgetComponentClass; // 0xe8 (0x8)
	struct FScalableFloat UseRandomTextAtEachSpeech; // 0xf0 (0x28)
	struct FScalableFloat DisplayBubbleDuration; // 0x118 (0x28)
	struct FScalableFloat SpeechBubbleMaxDrawDistance; // 0x140 (0x28)
	struct FScalableFloat CheckGroupMembersToSpeak; // 0x168 (0x28)
	struct FFortSpeechBubbleInfo SpeechBubbleInfo; // 0x190 (0x2)
	unsigned char unreflected_192[0x6]; // 0x192 (0x6) 
	struct FText CachedSelectedText; // 0x198 (0x18)
	float SpeechBubbleMaxDrawDistanceSqr; // 0x1b0 (0x4)
	bool bIsLocalPlayerWithinSpeechBubbleDrawDistance; // 0x1b4 (0x1)
	unsigned char unreflected_1b5[0x3]; // 0x1b5 (0x3) 
	class UWidgetComponent* TextWidgetComponent; // 0x1b8 (0x8)
	unsigned char unreflected_1c0[0x8]; // 0x1c0 (0x8) 
	class UFortPawnComponent_AIGroup* CachedGroupComponent; // 0x1c8 (0x8)
	class UDataTable* LoadedTextsDataTable; // 0x1d0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPawnComponent_SpeechBubble.StopSpeech (Underlying native function: StopSpeech 0x8703c88)
	void StopSpeech(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_SpeechBubble.StartSpeech (Underlying native function: StartSpeech 0x8703b90)
	void StartSpeech(struct FGameplayTagQuery& FilterTagQuery); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnComponent_SpeechBubble.OnRep_SpeechBubbleInfo (Underlying native function: OnRep_SpeechBubbleInfo 0x87022f4)
	void OnRepSpeechBubbleInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawnComponent_SpeechBubble.GetSpeechBubbleText (Underlying native function: GetSpeechBubbleText 0x87005bc)
	struct FText GetSpeechBubbleText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

