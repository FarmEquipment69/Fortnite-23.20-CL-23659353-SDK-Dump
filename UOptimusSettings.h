// Class /Script/OptimusSettings.OptimusSettings
// Size: 0x88
class UOptimusSettings : public UDeveloperSettings
{
	enum EOptimusDefaultDeformerMode DefaultMode; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TWeakObjectPtr<class UMeshDeformer> DefaultDeformer; // 0x38 (0x28)
	struct TWeakObjectPtr<class UMeshDeformer> DefaultRecomputeTangentDeformer; // 0x60 (0x28)
};

