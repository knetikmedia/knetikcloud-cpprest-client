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
 * LookupResource.h
 *
 * Expressions are instructions for the rule engine to resolve certain values. For example instead of &#x60;user 1&#x60; it&#39;d state &#x60;user provided by the event&#x60;. Full list and definitions available at GET /bre/expressions.
 */

#ifndef LookupResource_H_
#define LookupResource_H_


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
class  LookupResource
    : public ModelBase
{
public:
    LookupResource();
    virtual ~LookupResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LookupResource members

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
    std::shared_ptr<ExpressionResource> getLookupKey() const;
    bool lookupKeyIsSet() const;
    void unsetLookup_key();
    void setLookupKey(std::shared_ptr<ExpressionResource> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRequiredKeyType() const;
    bool requiredKeyTypeIsSet() const;
    void unsetRequired_key_type();
    void setRequiredKeyType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getValueType() const;
    bool valueTypeIsSet() const;
    void unsetValue_type();
    void setValueType(utility::string_t value);

protected:
    utility::string_t m_Definition;
    bool m_DefinitionIsSet;
    std::shared_ptr<ExpressionResource> m_Lookup_key;
    bool m_Lookup_keyIsSet;
    utility::string_t m_Required_key_type;
    bool m_Required_key_typeIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Value_type;
    bool m_Value_typeIsSet;
};

}
}
}
}

#endif /* LookupResource_H_ */
