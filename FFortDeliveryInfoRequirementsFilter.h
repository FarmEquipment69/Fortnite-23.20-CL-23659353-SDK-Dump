// ScriptStruct /Script/FortniteGame.FortDeliveryInfoRequirementsFilter
// Size: 0x98
struct FFortDeliveryInfoRequirementsFilter
{
	struct FGameplayTagRequirements SourceTagRequirements; // 0x0 (0x40)
	struct FGameplayTagRequirements TargetTagRequirements; // 0x40 (0x40)
	struct TEnumAsByte<EFortTeamAffiliation> ApplicableTeamAffiliation; // 0x80 (0x1)
	unsigned char unreflected_81[0x3]; // 0x81 (0x3) 
	unsigned char bConsiderTeamAffiliationToInstigator; // 0x84 (0x1)
	unsigned char unreflected_85[0x3]; // 0x85 (0x3) 
	struct TEnumAsByte<EFortTeam> ApplicableTeam; // 0x88 (0x1)
	unsigned char unreflected_89[0x3]; // 0x89 (0x3) 
	unsigned char bConsiderTeam; // 0x8c (0x1)
	unsigned char bApplyToPlayerPawns; // 0x8c (0x1)
	unsigned char bApplyToAIPawns; // 0x8c (0x1)
	unsigned char bApplyToBuildingActors; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	enum EFortDeliveryInfoBuildingActorSpecification BuildingActorSpecification; // 0x90 (0x1)
	unsigned char unreflected_91[0x3]; // 0x91 (0x3) 
	unsigned char bApplyToGlobalEnvironmentAbilityActor; // 0x94 (0x1)
	unsigned char padding_95[0x3]; // 0x95 (0x3)
};

