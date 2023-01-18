// Class /Script/FortniteGame.FortToyContext
// Size: 0x30
class UFortToyContext : public UBlueprintContextBase
{

	/* Functions */

	// Function /Script/FortniteGame.FortToyContext.PrintToMessageFeed (Underlying native function: PrintToMessageFeed 0x84370e4)
	void PrintToMessageFeed(struct FText& message); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortToyContext.PickToyOwnerNameStyle (Underlying native function: PickToyOwnerNameStyle 0x8437018)
	struct FText PickToyOwnerNameStyle(class AFortPlayerState*& Instigator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortToyContext.GetFilteredPlayerName (Underlying native function: GetFilteredPlayerName 0x8435a48)
	struct FString GetFilteredPlayerName(class AFortPlayerState*& Instigator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortToyContext.FormatPlayerNameForDisplay (Underlying native function: FormatPlayerNameForDisplay 0x8435794)
	struct FText FormatPlayerNameForDisplay(class AFortPlayerState*& Subject, enum EMessageFeedSubject& SubjectType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortToyContext.ConditionalPrintToMessageFeed (Underlying native function: ConditionalPrintToMessageFeed 0x84353b8)
	bool ConditionalPrintToMessageFeed(class AFortPlayerState*& Instigator, struct FVector& MessageLocation, enum EMessageFeedRelationshipFilter& RelationshipFilter, struct FText& message); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

