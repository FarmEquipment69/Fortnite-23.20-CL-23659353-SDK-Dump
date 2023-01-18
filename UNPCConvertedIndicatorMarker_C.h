// WidgetBlueprintGeneratedClass /Game/Athena/HUD/Actors/NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C
// Size: 0x5e8
class UNPCConvertedIndicatorMarker_C : public UAthenaMarkedActorIndicator
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5c8 (0x8)
	class UImage* IrwinIndicator; // 0x5d0 (0x8)
	class UConvertedMarkerInfo_C* RidingMarkerInfo; // 0x5d8 (0x8)
	class AFortPlayerStateAthena* CachedPlayerState; // 0x5e0 (0x8)

	/* Functions */

	// Function /Game/Athena/HUD/Actors/NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnSetMarkerData (Has no native function)
	void OnSetMarkerData(struct FFortWorldMarkerData& FortWorldMarkerData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnPingCommandEvent (Has no native function)
	void OnPingCommandEvent(enum PingCommandType& CommandType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.ExecuteUbergraph_NPCConvertedIndicatorMarker (Has no native function)
	void ExecuteUbergraphNPCConvertedIndicatorMarker(int& EntryPoint, enum PingCommandType& K2NodeCustomEventCommandType, struct FFortWorldMarkerData& K2NodeEventFortWorldMarkerData, class ABP_PlayerPawn_Tandem_C*& K2NodeDynamicCastAsBPPlayerPawnTandem, bool& K2NodeDynamicCastbSuccess, class ANPC_Pawn_Wildlife_Parent_C*& K2NodeDynamicCastAsNPCPawnWildlifeParent, bool& K2NodeDynamicCastbSuccess1, class UFortPawnComponent_Convert*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue, class AFortPlayerPawn*& CallFuncGetConverterPawnReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsLocallyControlledReturnValue, class AFortPlayerState*& CallFuncAttemptGetPlayerStateForPawnReturnValue, bool& CallFuncIsValidReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPlayerStateAthena*& K2NodeDynamicCastAsFortPlayerStateAthena, bool& K2NodeDynamicCastbSuccess2); // (Final | 0x00008000 | HasDefaults)
};

