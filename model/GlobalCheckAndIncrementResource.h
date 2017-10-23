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
 * GlobalCheckAndIncrementResource.h
 *
 * Expressions are instructions for the rule engine to resolve certain values. For example instead of &#x60;user 1&#x60; it&#39;d state &#x60;user provided by the event&#x60;. Full list and definitions available at GET /bre/expressions.
 */

#ifndef GlobalCheckAndIncrementResource_H_
#define GlobalCheckAndIncrementResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "ExpressionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// Expressions are instructions for the rule engine to resolve certain values. For example instead of &#x60;user 1&#x60; it&#39;d state &#x60;user provided by the event&#x60;. Full list and definitions available at GET /bre/expressions.
/// </summary>
class  GlobalCheckAndIncrementResource
    : public ModelBase
{
public:
    GlobalCheckAndIncrementResource();
    virtual ~GlobalCheckAndIncrementResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GlobalCheckAndIncrementResource members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExpressionResource> getCheckValueResource() const;
    bool checkValueResourceIsSet() const;
    void unsetCheck_value_resource();
    void setCheckValueResource(std::shared_ptr<ExpressionResource> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDefinition() const;
    bool definitionIsSet() const;
    void unsetDefinition();
    void setDefinition(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExpressionResource> getGlobalResource() const;
    bool globalResourceIsSet() const;
    void unsetGlobal_resource();
    void setGlobalResource(std::shared_ptr<ExpressionResource> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);

protected:
    std::shared_ptr<ExpressionResource> m_Check_value_resource;
    bool m_Check_value_resourceIsSet;
    utility::string_t m_Definition;
    bool m_DefinitionIsSet;
    std::shared_ptr<ExpressionResource> m_Global_resource;
    bool m_Global_resourceIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
};

}
}
}
}

#endif /* GlobalCheckAndIncrementResource_H_ */
