// Class /Script/FortniteGame.FortCurieElementInteractWithMaterialHandler
// Size: 0x80
class UFortCurieElementInteractWithMaterialHandler : public UCurieElementInteractWithMaterialHandler
{
	struct FScalableFloat InteractMagnitudeThreshold; // 0x30 (0x28)
	bool bShouldSuggestElement; // 0x58 (0x1)
	bool bShouldDisableElementDecay; // 0x59 (0x1)
	unsigned char unreflected_5a[0x6]; // 0x5a (0x6) 
	struct TArray<struct FFortCurieInteractStateSuggestionData> OnInstantInteractionStateSuggestions; // 0x60 (0x10)
	struct TArray<struct FFortCurieInteractStateSuggestionData> OnBeginInteractionStateSuggestions; // 0x70 (0x10)
};

