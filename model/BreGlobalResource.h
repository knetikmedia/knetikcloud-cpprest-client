/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * BreGlobalResource.h
 *
 * 
 */

#ifndef BreGlobalResource_H_
#define BreGlobalResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "BreGlobalScopeDefinition.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BreGlobalResource
    : public ModelBase
{
public:
    BreGlobalResource();
    virtual ~BreGlobalResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BreGlobalResource members

    /// <summary>
    /// A human readable description for display in admin pages
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// The id of the global definition. Default is a random guid. Cannot be updated
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// The key for the global. Must be unique when combined with scope names. Usually a single descriptive word like &#39;purchases&#39; or &#39;logins&#39;
    /// </summary>
    utility::string_t getKey() const;
    void setKey(utility::string_t value);
        /// <summary>
    /// A human readable name for display in admin pages
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// A list of scoping parameters. Allows the global to have a different value in different context such as a count of purchases for each user (by putting a &#39;user&#39; scope in this list). When using this global in a rule these scopes will need to be mapped with an expression to provide a value, similar to the parameters in an action
    /// </summary>
    std::vector<std::shared_ptr<BreGlobalScopeDefinition>>& getScopes();
    bool scopesIsSet() const;
    void unsetScopes();
    /// <summary>
    /// Where this global came from. System globals cannot be removed or updated
    /// </summary>
    bool getSystemGlobal() const;
    void setSystemGlobal(bool value);
    bool system_globalIsSet() const;
    void unsetSystem_global();
    /// <summary>
    /// The variable type the global stores. See the See Bre Variables enpoint for list
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
    
protected:
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
utility::string_t m_Id;
    bool m_IdIsSet;
utility::string_t m_Key;
    utility::string_t m_Name;
    bool m_NameIsSet;
std::vector<std::shared_ptr<BreGlobalScopeDefinition>> m_Scopes;
    bool m_ScopesIsSet;
bool m_System_global;
    bool m_System_globalIsSet;
utility::string_t m_Type;
    };

}
}
}
}

#endif /* BreGlobalResource_H_ */
