/*
 * Your License or Copyright can go here
 */

#ifndef _lesson4_h_
#define _lesson4_h_

#include "SIMPLib/SIMPLib.h"
#include "SIMPLib/Common/AbstractFilter.h"
#include "SIMPLib/Common/SIMPLibSetGetMacros.h"

/**
 * @brief The Lesson4 class. See [Filter documentation](@ref lesson4) for details.
 */
class Lesson4 : public AbstractFilter
{
  Q_OBJECT

  public:
    SIMPL_SHARED_POINTERS(Lesson4)
    SIMPL_STATIC_NEW_MACRO(Lesson4)
    SIMPL_TYPE_MACRO_SUPER(Lesson4, AbstractFilter)

    virtual ~Lesson4();

    SIMPL_FILTER_PARAMETER(DataArrayPath, InputDataArrayPath)
    Q_PROPERTY(DataArrayPath InputDataArrayPath READ getInputDataArrayPath WRITE setInputDataArrayPath)

    SIMPL_FILTER_PARAMETER(DataArrayPath, OutputDataArrayPath)
    Q_PROPERTY(DataArrayPath OutputDataArrayPath READ getOutputDataArrayPath WRITE setOutputDataArrayPath)

    SIMPL_FILTER_PARAMETER(float, Value)
    Q_PROPERTY(float Value READ getValue WRITE setValue)

    SIMPL_FILTER_PARAMETER(int, Operator)
    Q_PROPERTY(int Operator READ getOperator WRITE setOperator)

    SIMPL_FILTER_PARAMETER(bool, Selection)
    Q_PROPERTY(bool Selection READ getSelection WRITE setSelection)

    SIMPL_FILTER_PARAMETER(float, FloatValue)
    Q_PROPERTY(float FloatValue READ getFloatValue WRITE setFloatValue)

    /**
     * @brief getCompiledLibraryName Reimplemented from @see AbstractFilter class
     */
    virtual const QString getCompiledLibraryName();

    /**
     * @brief getBrandingString Returns the branding string for the filter, which is a tag
     * used to denote the filter's association with specific plugins
     * @return Branding string
    */
    virtual const QString getBrandingString();

    /**
     * @brief getFilterVersion Returns a version string for this filter. Default
     * value is an empty string.
     * @return
     */
    virtual const QString getFilterVersion();

    /**
     * @brief newFilterInstance Reimplemented from @see AbstractFilter class
     */
    virtual AbstractFilter::Pointer newFilterInstance(bool copyFilterParameters);

    /**
     * @brief getGroupName Reimplemented from @see AbstractFilter class
     */
    virtual const QString getGroupName();

    /**
     * @brief getSubGroupName Reimplemented from @see AbstractFilter class
     */
    virtual const QString getSubGroupName();

    /**
     * @brief getHumanLabel Reimplemented from @see AbstractFilter class
     */
    virtual const QString getHumanLabel();

    /**
     * @brief setupFilterParameters Reimplemented from @see AbstractFilter class
     */
    virtual void setupFilterParameters();

    /**
     * @brief execute Reimplemented from @see AbstractFilter class
     */
    virtual void execute();

    /**
    * @brief preflight Reimplemented from @see AbstractFilter class
    */
    virtual void preflight();

  signals:
    /**
     * @brief updateFilterParameters Emitted when the Filter requests all the latest Filter parameters
     * be pushed from a user-facing control (such as a widget)
     * @param filter Filter instance pointer
     */
    void updateFilterParameters(AbstractFilter* filter);

    /**
     * @brief parametersChanged Emitted when any Filter parameter is changed internally
     */
    void parametersChanged();

    /**
     * @brief preflightAboutToExecute Emitted just before calling dataCheck()
     */
    void preflightAboutToExecute();

    /**
     * @brief preflightExecuted Emitted just after calling dataCheck()
     */
    void preflightExecuted();

  protected:
    Lesson4();

    /**
    * @brief dataCheck Checks for the appropriate parameter values and availability of arrays
    */
    void dataCheck();

    /**
    * @brief Initializes all the private instance variables.
    */
    void initialize();

  private:
    DEFINE_DATAARRAY_VARIABLE(float, InputData)
    DEFINE_DATAARRAY_VARIABLE(float, OutputData)


    Lesson4(const Lesson4&); // Copy Constructor Not Implemented
    void operator=(const Lesson4&); // Operator '=' Not Implemented
};

#endif /* _Lesson4_H_ */
