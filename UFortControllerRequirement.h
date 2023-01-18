// Class /Script/FortniteGame.FortControllerRequirement
// Size: 0x30
class UFortControllerRequirement : public UObject
{
	bool bInverseCondition; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerRequirement.IsRequirementMetInternal (Underlying native function: IsRequirementMetInternal 0x871acb4)
	bool IsRequirementMetInternal(struct FControllerRequirementTestContext& RequestContext); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortControllerRequirement.IsRequirementMet (Underlying native function: IsRequirementMet 0x871ac10)
	bool IsRequirementMet(struct FControllerRequirementTestContext& RequestContext); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

