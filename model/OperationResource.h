/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * OperationResource.h
 *
 * Expressions are instructions for the rule engine to resolve certain values. For example instead of &#x60;user 1&#x60; it&#39;d state &#x60;user provided by the event&#x60;. Full list and definitions available at GET /bre/expressions.
 */

#ifndef OperationResource_H_
#define OperationResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "ExpressionResource.h"
#include <vector>
#include "OperationDefinitionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// Expressions are instructions for the rule engine to resolve certain values. For example instead of &#x60;user 1&#x60; it&#39;d state &#x60;user provided by the event&#x60;. Full list and definitions available at GET /bre/expressions.
/// </summary>
class  OperationResource
    : public ModelBase
{
public:
    OperationResource();
    virtual ~OperationResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OperationResource members

    /// <summary>
    /// The arguments the operator apply to. See notes for details.
    /// </summary>
    std::vector<std::shared_ptr<ExpressionResource>>& getArgs();
        void setArgs(std::vector<std::shared_ptr<ExpressionResource>> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDefinition() const;
    bool definitionIsSet() const;
    void unsetDefinition();
    void setDefinition(utility::string_t value);
    /// <summary>
    /// The operator to be used in this predicate. See notes for details.
    /// </summary>
    utility::string_t getOp() const;
        void setOp(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReturnType() const;
    bool returnTypeIsSet() const;
    void unsetReturn_type();
    void setReturnType(utility::string_t value);
    /// <summary>
    /// The operators supported by this expression
    /// </summary>
    std::vector<std::shared_ptr<OperationDefinitionResource>>& getSupportedOperators();
    bool supportedOperatorsIsSet() const;
    void unsetSupported_operators();
    void setSupportedOperators(std::vector<std::shared_ptr<OperationDefinitionResource>> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);

protected:
    std::vector<std::shared_ptr<ExpressionResource>> m_Args;
        utility::string_t m_Definition;
    bool m_DefinitionIsSet;
    utility::string_t m_Op;
        utility::string_t m_Return_type;
    bool m_Return_typeIsSet;
    std::vector<std::shared_ptr<OperationDefinitionResource>> m_Supported_operators;
    bool m_Supported_operatorsIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
};

}
}
}
}

#endif /* OperationResource_H_ */
