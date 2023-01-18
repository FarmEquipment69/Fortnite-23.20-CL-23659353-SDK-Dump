// Class /Script/CRDPlayerTracker.CRDPlayerTrackerMarker
// Size: 0x298
class ACRDPlayerTrackerMarker : public AActor
{
	class UClass* WidgetClass; // 0x288 (0x8)
	class UActorComponent* PlayerTrackerUIActorComponent; // 0x290 (0x8)

	/* Functions */

	// Function /Script/CRDPlayerTracker.CRDPlayerTrackerMarker.DestroyPlayerTrackerWidget (Underlying native function: DestroyPlayerTrackerWidget 0x73af154)
	bool DestroyPlayerTrackerWidget(class AFortPlayerControllerGameplay*& InFortPlayerControllerGameplay); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRDPlayerTracker.CRDPlayerTrackerMarker.CreatePlayerTrackerWidget (Underlying native function: CreatePlayerTrackerWidget 0x73aef84)
	class UUserWidget* CreatePlayerTrackerWidget(class AFortPlayerControllerGameplay*& InFortPlayerControllerGameplay, class AFortPlayerStateAthena*& AssociatedPSA); // (Final | Native | Public | BlueprintCallable)
};

