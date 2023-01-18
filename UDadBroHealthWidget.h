// Class /Script/FortniteUI.DadBroHealthWidget
// Size: 0x340
class UDadBroHealthWidget : public ULTMWidgetBase
{
	class AFortAthenaMutator_DadBro* DadBroMutator; // 0x328 (0x8)
	unsigned char unreflected_330[0x4]; // 0x330 (0x4) 
	float BossHealthRatio; // 0x334 (0x4)
	class AFortAIPawn* BossAIPawn; // 0x338 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.DadBroHealthWidget.UpdateFinalBossBattle (Underlying native function: UpdateFinalBossBattle 0xa5806d0)
	void UpdateFinalBossBattle(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.DadBroHealthWidget.OnTransitionToNewHealthState (Has no native function)
	void OnTransitionToNewHealthState(enum EDadBroHealthType& NewHealthType); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.DadBroHealthWidget.OnNewHealthPercent (Has no native function)
	void OnNewHealthPercent(float& NewHealth); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.DadBroHealthWidget.HandleMashPhaseChanged (Underlying native function: HandleMashPhaseChanged 0xa57dc38)
	void HandleMashPhaseChanged(int& NewPhase); // (Final | Native | Protected)

	// Function /Script/FortniteUI.DadBroHealthWidget.HandleDadBroSpawned (Underlying native function: HandleDadBroSpawned 0xa57d800)
	void HandleDadBroSpawned(class AFortAIPawn*& DadBroPawn); // (Final | Native | Protected)
};

