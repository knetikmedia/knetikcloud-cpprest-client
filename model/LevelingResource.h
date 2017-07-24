/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * LevelingResource.h
 *
 * 
 */

#ifndef LevelingResource_H_
#define LevelingResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "TierResource.h"
#include <map>
#include <vector>
#include "Property.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  LevelingResource
    : public ModelBase
{
public:
    LevelingResource();
    virtual ~LevelingResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LevelingResource members

    /// <summary>
    /// A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Property>>& getAdditionalProperties();
    bool additionalPropertiesIsSet() const;
    void unsetAdditional_properties();
    void setAdditionalProperties(std::map<utility::string_t, std::shared_ptr<Property>> value);
    /// <summary>
    /// The date the leveling schema was created
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The description of the leveling schema
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// The name of the leveling schema.  IMMUTABLE
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// A set of tiers that contain experience boundaries
    /// </summary>
    std::vector<std::shared_ptr<TierResource>>& getTiers();
    bool tiersIsSet() const;
    void unsetTiers();
    void setTiers(std::vector<std::shared_ptr<TierResource>> value);
    /// <summary>
    /// The date the leveling schema was updated
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);

protected:
    std::map<utility::string_t, std::shared_ptr<Property>> m_Additional_properties;
    bool m_Additional_propertiesIsSet;
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Name;
        std::vector<std::shared_ptr<TierResource>> m_Tiers;
    bool m_TiersIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
};

}
}
}
}

#endif /* LevelingResource_H_ */
