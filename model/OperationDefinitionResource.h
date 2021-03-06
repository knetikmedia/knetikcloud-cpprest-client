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
 * OperationDefinitionResource.h
 *
 * 
 */

#ifndef OperationDefinitionResource_H_
#define OperationDefinitionResource_H_


#include "ModelBase.h"

#include "ArgumentResource.h"
#include <cpprest/details/basic_types.h>
#include "Operator.h"
#include <vector>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OperationDefinitionResource
    : public ModelBase
{
public:
    OperationDefinitionResource();
    virtual ~OperationDefinitionResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OperationDefinitionResource members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ArgumentResource>>& getArguments();
    bool argumentsIsSet() const;
    void unsetArguments();
    void setArguments(std::vector<std::shared_ptr<ArgumentResource>> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Operator> getOperator() const;
    bool operatorIsSet() const;
    void unsetOperator();
    void setOperator(std::shared_ptr<Operator> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReturnType() const;
    bool returnTypeIsSet() const;
    void unsetReturn_type();
    void setReturnType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTemplate() const;
    bool templateIsSet() const;
    void unsetTemplate();
    void setTemplate(utility::string_t value);

protected:
    std::vector<std::shared_ptr<ArgumentResource>> m_Arguments;
    bool m_ArgumentsIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    std::shared_ptr<Operator> m_Operator;
    bool m_OperatorIsSet;
    utility::string_t m_Return_type;
    bool m_Return_typeIsSet;
    utility::string_t m_Template;
    bool m_TemplateIsSet;
};

}
}
}
}

#endif /* OperationDefinitionResource_H_ */
