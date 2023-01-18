// Enum /Script/MetasoundFrontend.EMetasoundFrontendClassType
enum class EMetasoundFrontendClassType : uint8_t
{
  External = 0,
  Graph = 1,
  Input = 2,
  Output = 3,
  Literal = 4,
  Variable = 5,
  VariableDeferredAccessor = 6,
  VariableAccessor = 7,
  VariableMutator = 8,
  Template = 9,
  Invalid = 10,
  EMetasoundFrontendClassType_MAX = 11
};