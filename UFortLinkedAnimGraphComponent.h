// Class /Script/FortniteGame.FortLinkedAnimGraphComponent
// Size: 0x1c8
class UFortLinkedAnimGraphComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FFortLinkedAnimGraphsData LinkedGraphsData; // 0xa8 (0x38)
	class UClass* MovementModeInterface; // 0xe0 (0x8)
	class UClass* DebugGraphClass; // 0xe8 (0x8)
	float FullBodyAdditiveDeactivationTime; // 0xf0 (0x4)
	unsigned char unreflected_f4[0x4]; // 0xf4 (0x4) 
	class UClass* CurrentFullBodyAdditiveClass; // 0xf8 (0x8)
	class UClass* CurrentFullBodyStateClass; // 0x100 (0x8)
	struct TArray<class UClass*> MovementModeLayerStack; // 0x108 (0x10)
	class UClass* WindAnimLayer; // 0x118 (0x8)
	unsigned char unreflected_120[0x58]; // 0x120 (0x58) 
	struct TMap<class UClass*, class UFortAnimInstancePropertyDebug*> AnimInstancePropertyDebugs; // 0x178 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortLinkedAnimGraphComponent.ToggleCurveFilter (Underlying native function: ToggleCurveFilter 0x7291288)
	void ToggleCurveFilter(struct FString& Filter); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortLinkedAnimGraphComponent.ResetCurveFilters (Underlying native function: ResetCurveFilters 0x26daa0c)
	void ResetCurveFilters(); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortLinkedAnimGraphComponent.RemoveCurveFilter (Underlying native function: RemoveCurveFilter 0x8090bc8)
	bool RemoveCurveFilter(struct FString& Filter); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortLinkedAnimGraphComponent.OnRep_WindAnimLayer (Underlying native function: OnRep_WindAnimLayer 0x196025c)
	void OnRepWindAnimLayer(class UClass*& AnimLayer); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortLinkedAnimGraphComponent.AddCurveFilter (Underlying native function: AddCurveFilter 0x7291288)
	void AddCurveFilter(struct FString& Filter); // (Final | Exec | Native | Private)
};

